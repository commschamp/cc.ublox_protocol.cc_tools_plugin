// Generated by commsdsl2tools_qt v7.1.0

#pragma once

#include <memory>
#include "cc_tools_qt/ToolsMessage.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgNavx5V2Impl;
class CfgNavx5V2 : public cc_tools_qt::ToolsMessage
{
public:
    CfgNavx5V2();
    CfgNavx5V2(const CfgNavx5V2&) = delete;
    CfgNavx5V2(CfgNavx5V2&&) = delete;
    virtual ~CfgNavx5V2();
    CfgNavx5V2& operator=(const CfgNavx5V2& other);
    CfgNavx5V2& operator=(CfgNavx5V2&&);

protected:
    virtual const char* nameImpl() const override;
    virtual bool refreshMsgImpl() override;
    virtual qlonglong numericIdImpl() const override;
    virtual QString idAsStringImpl() const override;
    virtual void resetImpl() override;
    virtual bool assignImpl(const cc_tools_qt::ToolsMessage& other) override;
    virtual bool isValidImpl() const override;
    virtual DataSeq encodeDataImpl() const override;
    virtual bool decodeDataImpl(const DataSeq& data) override;
    virtual Ptr cloneImpl() const override;
    virtual void assignProtMessageImpl(void* protMsg) override;
    virtual DataSeq encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const override;
    virtual FieldsList transportFieldsImpl() override;
    virtual FieldsList payloadFieldsImpl() override;

private:
    using ImplPtr = std::unique_ptr<CfgNavx5V2Impl>;

    CfgNavx5V2(ImplPtr&& impl);

    ImplPtr m_pImpl;
};

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
