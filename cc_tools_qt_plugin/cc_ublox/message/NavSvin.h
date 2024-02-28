// Generated by commsdsl2tools_qt v6.3.0

#pragma once

#include <QtCore/QVariantList>
#include <memory>
#include "cc_tools_qt_plugin/cc_ublox/Message.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

class NavSvinImpl;
class NavSvin : public cc_tools_qt_plugin::cc_ublox::Message
{
public:
    NavSvin();
    NavSvin(const NavSvin&) = delete;
    NavSvin(NavSvin&&) = delete;
    virtual ~NavSvin();
    NavSvin& operator=(const NavSvin& other);
    NavSvin& operator=(NavSvin&&);
    static MsgIdParamType doGetId();

protected:
    virtual const char* nameImpl() const override;
    virtual const QVariantList& fieldsPropertiesImpl() const override;
    virtual void dispatchImpl(cc_tools_qt::MessageHandler& handler) override;
    virtual void resetImpl() override;
    virtual bool assignImpl(const cc_tools_qt::Message& other) override;
    virtual MsgIdParamType getIdImpl() const override;
    virtual comms::ErrorStatus readImpl(ReadIterator& iter, std::size_t len) override;
    virtual comms::ErrorStatus writeImpl(WriteIterator& iter, std::size_t len) const override;
    virtual bool validImpl() const override;
    virtual std::size_t lengthImpl() const override;
    virtual bool refreshImpl() override;

private:
    std::unique_ptr<NavSvinImpl> m_pImpl;
};

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
