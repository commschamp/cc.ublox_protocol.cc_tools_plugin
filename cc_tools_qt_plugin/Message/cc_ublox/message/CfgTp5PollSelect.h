// Generated by commsdsl2tools_qt v7.0.3

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

class CfgTp5PollSelectImpl;
class CfgTp5PollSelect : public cc_tools_qt::ToolsMessage
{
public:
    CfgTp5PollSelect();
    CfgTp5PollSelect(const CfgTp5PollSelect&) = delete;
    CfgTp5PollSelect(CfgTp5PollSelect&&) = delete;
    virtual ~CfgTp5PollSelect();
    CfgTp5PollSelect& operator=(const CfgTp5PollSelect& other);
    CfgTp5PollSelect& operator=(CfgTp5PollSelect&&);

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
    using ImplPtr = std::unique_ptr<CfgTp5PollSelectImpl>;

    CfgTp5PollSelect(ImplPtr&& impl);

    ImplPtr m_pImpl;
};

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
