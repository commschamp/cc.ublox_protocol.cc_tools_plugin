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

class CfgNav5PollImpl;
class CfgNav5Poll : public cc_tools_qt::ToolsMessage
{
public:
    CfgNav5Poll();
    CfgNav5Poll(const CfgNav5Poll&) = delete;
    CfgNav5Poll(CfgNav5Poll&&) = delete;
    virtual ~CfgNav5Poll();
    CfgNav5Poll& operator=(const CfgNav5Poll& other);
    CfgNav5Poll& operator=(CfgNav5Poll&&);

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
    using ImplPtr = std::unique_ptr<CfgNav5PollImpl>;

    CfgNav5Poll(ImplPtr&& impl);

    ImplPtr m_pImpl;
};

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
